function main(input) {
  const lines = input.split("\n");
  const N = parseInt(lines[0]);
  const array = lines[1].split(" ").map(Number);

  const count = {};

  for (let i = 0; i < N; i++) {
    if (count[array[i]]) {
      console.log(array[i]);
      return;
    } else {
      count[array[i]] = 1;
    }
  }
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
