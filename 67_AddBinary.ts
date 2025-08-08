function addBinary(a: string, b: string): string {
  let i = a.length - 1, j = b.length - 1;
  let carry = 0, result = "";

  while (i >= 0 || j >= 0 || carry) {
      let sum = carry;

      if (i >= 0) sum += Number(a.charAt(i--)); 
      if (j >= 0) sum += Number(b.charAt(j--));

      result = (sum % 2) + result; // Agregamos el bit actual
      carry = Math.floor(sum / 2); // Calculamos el acarreo
  }

  return result;
}