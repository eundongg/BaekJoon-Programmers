function solution(a, b, c) {
    const sum = a+b+c;
    const sumOfSquares = a**2+b**2+c**2;
    const sumOfCubes = a**3+b**3+c**3;

    if (a!==b&&b!==c&&a!==c) {
        return sum;
    }
    if ((a===b&&b!==c)||(b===c&&a!==c)||(a===c&&b!==c)) {
        return sum*sumOfSquares;
    }
    
    return sum*sumOfSquares*sumOfCubes;
}