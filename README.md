# Smart Cache Memory Management System

A C++ project that simulates cache memory management and demonstrates how cache replacement policies work.

## Current Features

- Configurable cache capacity
- User-defined sequence of requests
- Cache hit and miss detection
- FIFO (First-In, First-Out) replacement policy
- Display of cache contents after every request
- Hit count, miss count, and hit/miss ratios
- Input validation for cache capacity and request count

## Technologies Used

- C++
- Standard Template Library (STL)
- `vector` data structure
- Visual Studio Code

## How to Run

Compile the program:

```bash
g++ main.cpp -o main
```

Run on Windows:

```powershell
.\main.exe
```

## Example Input

```text
Enter cache capacity: 3
Enter number of requests: 5
Enter requests: 1 2 3 4 1
```

## Planned Improvements

- Implement LRU (Least Recently Used)
- Implement LFU (Least Frequently Used)
- Develop a smart hybrid replacement policy
- Compare replacement policies using performance metrics
- Build an optional web dashboard

## Project Status

Initial prototype completed. FIFO cache simulation is currently implemented; additional policies are planned.

## Author

B.Tech Mathematics and Computing student project.