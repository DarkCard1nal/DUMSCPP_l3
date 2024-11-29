# DUMSCPP_l3

_Created for the course "Development using modern C++ standards" V. N. Karazin Kharkiv National University_

"Image" CMake linux program using C++17 standard.

---

# Image Processing Library

## Description
This is a **C++17 CMake-based project** for Linux named **"Image"**. It is designed to create, process, and store images in the PGMA format. The project includes a comprehensive `Image` class for handling image manipulation tasks and provides methods for loading, saving, and analyzing images.

---

## Features
### Attributes of the `Image` Class
- **`rows` and `cols`**: Store the number of rows and columns in the image.
- **`pixels`**: A one-dimensional array to store pixel values.

### Methods
1. **Image Dimensions**:
   - `getRows()`: Returns the number of rows.
   - `getCols()`: Returns the number of columns.

2. **Pixel Access**:
   - `at(i, j)`: Provides access to pixels with boundary checking.

3. **Pixel Retrieval**:
   - `getPixels()`: Returns a copy of the one-dimensional array of pixels.

4. **File Handling**:
   - `loadFromPGM(filePath)`: Reads an image from a file in PGMA format.
   - `saveToPGM(filePath)`: Saves an image to a file in PGMA format.

5. **Histogram**:
   - `computeHistogram(bins)`: Calculates a normalized histogram of pixel intensities.

---

## Histogram Normalization
The histogram is computed as follows:
- Pixel counts are accumulated for each bin based on their intensity range.
- The counts are normalized by dividing each bin value by the total number of pixels.

---

## Usage Example

### Sample Output
```plaintext
Image loaded successfully.

Image changed successfully:
255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 0 3 3 3 3 0 0 7 7 7 7 0 0 11 11 11 11 0 0 15 15 15 15 0 0 3 0 0 0 0 0 7 0 0 0 0 0 11 0 0 0 0 0 15 0 0 15 0 0 3 3 3 0 0 0 7 7 7 0 0 0 11 11 11 0 0 0 15 15 15 15 0 0 3 0 0 0 0 0 7 0 0 0 0 0 11 0 0 0 0 0 15 0 0 0 0 0 3 0 0 0 0 0 7 7 7 7 0 0 11 11 11 11 0 0 15 0 0 0 0 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255 0 255.

Histogram (normalized):
Bin 0: 0.857143
Bin 1: 0
Bin 2: 0
Bin 3: 0
Bin 4: 0.142857

Image saved to output.pgm successfully.
```

---

## File Structure
### Header File: `image.hpp`
Defines the `Image` class and its public API.

### Source File: `image.cpp`
Implements the methods of the `Image` class, including:
- File reading and writing
- Pixel manipulation
- Histogram computation

### Main File: `main.cpp`
Demonstrates the usage of the `Image` class by:
1. Loading an image.
2. Modifying the pixel values.
3. Calculating the histogram.
4. Saving the updated image.

---

## How to Build and Run

### Prerequisites
- **C++17 or later**
- **CMake**
- **Linux Development Environment**

### Build Instructions

1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd <repository_directory>
   ```

2. Create a build directory:
   ```bash
   mkdir build && cd build
   ```

3. Configure the project using CMake:
   ```bash
   cmake ..
   ```

4. Run the program:
   ```bash
   ./Image
   ```

---

## File Formats

### PGMA Format
This project uses the **PGMA (Portable GrayMap ASCII)** format for image files:
1. Header:
   - First line: `P2`
   - Second line: Comment (optional, starts with `#`)
   - Third line: Image dimensions (columns and rows)
   - Fourth line: Maximum pixel intensity (usually 255)

2. Pixel data:
   - A list of pixel values, arranged row by row.
