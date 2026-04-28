# C++ Vehicle Data Analytics Tool

## Overview

This project is a C++ data analytics application designed to process large CSV datasets containing vehicle records.  

The program loads structured vehicle data into container-based data structures and performs filtering, searching, and analytical operations.

The dataset used for testing contains approximately **4,000 vehicle records**, each including:

- VIN
- Make
- Year
- Color
- Vehicle Value
- State of Origin

This project demonstrates practical use of C++ containers, file parsing, and structured data processing.

---

## Features

- CSV file parsing and data ingestion
- Storage of records using container-based structures
- Filtering records by attributes
- Data searching capabilities
- Aggregation and analysis of vehicle values
- Structured data management using object-oriented design

---

## Technologies Used

- **Language:** C++
- **Standard Library Containers:**  
  - `vector`
  - `map`
  - `stack`
  - `queue`
- File I/O handling
- Object-Oriented Programming

---

## How to Build and Run

### Requirements

- C++ compiler (GCC, Clang, or MSVC)
- C++11 or newer

### Compile

Example using g++:

```bash
g++ -std=c++11 main.cpp -o vehicle_analyzer
