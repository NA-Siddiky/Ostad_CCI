function main(input) {
    // 1. Extract the first character and remaining string
    const firstChar = input[0];
    const remainingStr = input.substring(1);
  
    // 2. Combine the remaining string and first character
    const rotatedStr = remainingStr + firstChar;
  
    // 3. Remove trailing spaces (if any)
    const trimmedStr = rotatedStr.trim();
  
    // 4. Print the trimmed and rotated string
    console.log(trimmedStr);
  }
  
  // Read input from process.stdin and call main function
  let input = "";
  process.stdin.on('data', (chunk) => {
    input += chunk;
  });
  
  process.stdin.on('end', () => {
    main(input.trim());
  });
  