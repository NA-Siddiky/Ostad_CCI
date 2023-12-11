function main(input) {
  let inputArr = input.trim().split("\n");
  let n = parseInt(inputArr[0]);
  let arr = inputArr[1].split(" ").map(Number);

  function maxUnsortedSubarray(arr) {
    let start = -1,
      end = -1;
    let maxValue = -Infinity;
    let minValue = Infinity;

    for (let i = 0; i < n; i++) {
      maxValue = Math.max(maxValue, arr[i]);
      if (arr[i] < maxValue) {
        end = i;
      }
    }

    for (let i = n - 1; i >= 0; i--) {
      minValue = Math.min(minValue, arr[i]);
      if (arr[i] > minValue) {
        start = i;
      }
    }

    if (start === -1 && end === -1) {
      return "-1";
    } else {
      return start + 1 + " " + (end + 1);
    }
  }

  console.log(maxUnsortedSubarray(arr));
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input);
});
