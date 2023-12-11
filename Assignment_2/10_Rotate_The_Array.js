function main(input) {
  const lines = input.split("\n");
  const [N, K] = lines[0].split(" ").map(Number);
  const array = lines[1].split(" ").map(Number);

  if (K === 0) {
    const lastElement = array.pop();
    array.unshift(lastElement);
  } else if (K === 1) {
    const firstElement = array.shift();
    array.push(firstElement);
  }

  console.log(array.join(" "));
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
