function main(input) {
  let inputArr = input.trim().split("\n");
  let n = parseInt(inputArr[0]);
  let arr = inputArr[1].split(" ").map(Number);

  let maxSum = arr[0];
  let currentSum = arr[0];

  for (let i = 1; i < n; i++) {
    currentSum = Math.max(arr[i], currentSum + arr[i]);
    maxSum = Math.max(maxSum, currentSum);
  }

  console.log(maxSum);
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
