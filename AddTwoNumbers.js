var addTwoNumbers = function (l1, l2) {
	let carry = 0;
	let result = new ListNode(-1);
	let inicial = result;
	// Now we gonna sum both linked list as normal numbers.
	while (l1 || l2 || carry) {
		l1Val = l1 ? l1.val : 0;
		l2Val = l2 ? l2.val : 0;

		let nextDigit = (l1Val + l2Val + carry) % 10;
		result.next = new ListNode(nextDigit);
		result = result.next;

		carry = Math.floor((l1Val + l2Val + carry) / 10);

		l1 = l1 ? l1.next : null;
		l2 = l2 ? l2.next : null;
	}
	return inicial.next;
};

console.log(addTwoNumbers([2, 4, 3], [5, 6, 4]));
