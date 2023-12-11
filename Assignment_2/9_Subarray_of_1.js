function main(input) {
  let inputArr = input.trim().split("\n");
  let n = parseInt(inputArr[0]);
  let arr = inputArr[1].split(" ").map(Number);

  let maxCount = 0;
  let count = 0;

  for (let i = 0; i < n; i++) {
    if (arr[i] === 1) {
      count++;
      maxCount = Math.max(maxCount, count);
    } else {
      count = 0;
    }
  }

  console.log(maxCount);
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
