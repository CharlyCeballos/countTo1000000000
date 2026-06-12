/*
Make a program that counts to 1 000 000 000 in js++
*/

console.time("Executed time");

let n = 0;
let total = 0;
while (n < 1000000000) {
  // Forzamos una operación matemática que dependa del índice
  total += Math.sin(n);
  n++;
}

console.log("Counted to:", n, "Total:", total);
console.timeEnd("Executed time");
