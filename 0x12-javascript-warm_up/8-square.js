#!/usr/bin/node
if (process.argv[2] === undefined || asNaN(process.argv[2])) {
  console.log('Missing size');
} else {
  const x = Number(process.argv[2]);
  let a = 0;
  while (a < x) {
    console.log('X'.repeat(x));
    a++;
  }
