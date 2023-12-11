function main(input) {
  let inputArr = input.trim().split("\n");
  let n = parseInt(inputArr[0]);
  let arr = inputArr[1].split(" ").map(Number);

  arr.sort((a, b) => a - b);

  let count = 0;

  for (let i = 0; i < n - 2; i++) {
    let left = i + 1;
    let right = n - 1;

    while (left < right) {
      let sum = arr[i] + arr[left] + arr[right];
      if (sum === 0) {
        count++;
        left++;
        right--;
      } else if (sum < 0) {
        left++;
      } else {
        right--;
      }
    }
  }

  console.log(count);
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
