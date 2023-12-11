function main(input) {
  const intervals = input
    .trim()
    .split("\n")
    .slice(1)
    .map((line) => line.split(" ").map(Number));

  intervals.sort((a, b) => a[0] - b[0]);

  const merged = [];

  let current = intervals[0];

  for (let i = 1; i < intervals.length; i++) {
    const nextInterval = intervals[i];

    if (current[1] >= nextInterval[0]) {
      current[1] = Math.max(current[1], nextInterval[1]);
    } else {
      merged.push(current);
      current = nextInterval;
    }
  }

  merged.push(current);

  merged.forEach((interval) => console.log(interval.join(" ")));
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
