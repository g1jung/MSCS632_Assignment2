function makeMultiplier(factor) {
    return function(x) {
        return x * factor;
    };
}

const times3 = makeMultiplier(3);
const times5 = makeMultiplier(5);

console.log(times3(4));  // 12
console.log(times5(4));  // 20