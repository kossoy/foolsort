# foolsort

Inspired by JavaScript version:
```javascript
const arr = [20, 5, 900, 100, 1, 90, 200, 40];
for (let item of arr) {
    setTimeout(() => console.log(item), item)
}
```

CMake build:
```bash
cmake --build . --target foolsort --config Release
```

> Java version: https://github.com/kossoy/foolsort-java
