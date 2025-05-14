Set -> Collection of Objects, no duplicates

C++ sets -> 1. Ordered  2. Unordered

- Unordered Set: works on hashing, O(1) but high constant factor.

- Ordered Set: Insertions/Deletions/Searches O(log n) time:-

1. `s.begin()` -> returns iterator to the lowest elem
2. `s.end()` -> returns iterator to the address after highest elem 
3. `s.lower_bound(k)` -> returns iterator to least elem >= to k 
4. `s.upper_bound(k)` -> returns iterator to greatest elem > than k


Map -> unique key-value pair, O(1) 

- Unordered Map supports operations such as `m.count()` which just returns 0/1

- Ordered Map supports all that + `lower_bound()` and `upper_bound()`, returning iterators to entries, sorted by keys!

NOTE: for CodeForces -> always use sorted sets and maps


Multisets -> O(log n) time for most operations, an always sorted set which allows for storing multiple copies

`m[key]` -> modifies the map with key : (default constructor of the type)

NOT RECOMMENDED TO MODIFY MAP WHEN ITERATING. Maintain a list of keys to be modified or make a new map instead.