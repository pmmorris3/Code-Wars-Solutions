Backwards Read Primes are primes that when read backwards in base 10 (from right to left) 
are a different prime. (This rules out primes which are palindromes.)
```
Examples:
13 17 31 37 71 73 are Backwards Read Primes
```
13 is such because it's prime and read from right to left writes 31 which is prime too. Same for the others.

## Task
Find all Backwards Read Primes between two positive given numbers (both inclusive), the second one always being greater than or equal to the first one. The resulting array or the resulting string will be ordered following the natural order of the prime numbers.

## Example

backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
backwardsPrime(501, 599) => []

## Note for Forth
Return only the first backwards-read prime between start and end
or 0 if you don't find any

```ruby
Don't use Ruby Prime class, it's disabled.
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```crystal
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```python
backwards_prime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwards_prime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```java
backwardsPrime(2, 100) => "13 17 31 37 71 73 79 97"
backwardsPrime(9900, 10000) => "9923 9931 9941 9967"
```
```csharp
backwardsPrime(2, 100) => "13 17 31 37 71 73 79 97"
backwardsPrime(9900, 10000) => "9923 9931 9941 9967"
```
```fsharp
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```clojure
(backwards-prime 2 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
(backwards-prime 9900 10000) => [9923, 9931, 9941, 9967]
```
```haskell
backwards-prime 2 100 shouldBe [13, 17, 31, 37, 71, 73, 79, 97] 
backwards-prime 9900 10000 shouldBe [9923, 9931, 9941, 9967]
```
```javascript
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```typescript
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```coffeescript
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```php
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```cpp
backwardsPrime(2, 100) => "13 17 31 37 71 73 79 97"
backwardsPrime(9900, 10000) => "9923 9931 9941 9967"
```
```c
C returns a structure. See "Solution" and "Examples" tabs
```
```nasm
size_t size;
int *a = backwards_prime(2, 100, &size); // => {13, 17, 31, 37, 71, 73, 79, 97}
printf("%lld\n", size); // > 8
free(a);
a = backwards_prime(9900, 10000, &size); // => {9923, 9931, 9941, 9967}
printf("%lld\n", size); // > 4
free(a);
```
```rust
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```swift
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```
```r
backwardsPrime(2, 100) => c(13, 17, 31, 37, 71, 73, 79, 97)
backwardsPrime(9900, 10000) => c(9923, 9931, 9941, 9967)
```
```elixir
backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] 
backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967]
```

