function main(input) {
    let inputArr = input.trim().split('\n').slice(1).map(interval => interval.split(' ').map(Number));
    let result = mergeOverlappingIntervals(inputArr);
    result.forEach(interval => console.log(interval.join(' ')));
}

function mergeOverlappingIntervals(intervals) {
    if (intervals.length <= 1) return intervals;

    intervals.sort((a, b) => a[0] - b[0]);

    let merged = [intervals[0]];

    for (let i = 1; i < intervals.length; i++) {
        if (intervals[i][0] <= merged[merged.length - 1][1]) {
            merged[merged.length - 1][1] = Math.max(intervals[i][1], merged[merged.length - 1][1]);
        } else {
            merged.push(intervals[i]);
        }
    }

    return merged;
}

let input = "";
process.stdin.on('data', (chunk) => {
    input += chunk;
});

process.stdin.on('end', () => {
    main(input);
});