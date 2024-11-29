#pragma once
#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <vector>
#include <string>

class Image
{
private:
	size_t rows;
	size_t cols;
	std::vector<int> pixels;

public:
	Image(size_t rows, size_t cols);

	size_t getRows() const;
	size_t getCols() const;
	int &at(size_t i, size_t j);
	const int &at(size_t i, size_t j) const;
	std::vector<int> getPixels();
	bool loadFromPGM(const std::string &filePath);
	void saveToPGM(const std::string &filePath) const;
	std::vector<double> computeHistogram(size_t bins) const;
};

#endif // IMAGE_HPP
