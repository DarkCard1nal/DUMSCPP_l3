#include "image.hpp"
#include <iostream>

int main()
{
	try
	{
		Image img(7, 24);

		if (img.loadFromPGM("feep.ascii.pgm"))
		{
			std::cout << "Image loaded successfully.\n";

			// Image change
			for (size_t i = 0; i < 24; i += 2)
			{
				img.at(0, i) = 255;
				img.at(6, i + 1) = 255;
			}
			std::cout << "Image changed successfully:\n";
			for (int value : img.getPixels())
			{
				std::cout << value << " ";
			}
			std::cout << std::endl;

			// Histogram
			size_t bins = 5;
			auto histogram = img.computeHistogram(bins);
			std::cout << "Histogram (normalized):\n";
			for (size_t i = 0; i < bins; ++i)
			{
				std::cout << "Bin " << i << ": " << histogram[i] << "\n";
			}

			img.saveToPGM("output.pgm");
			std::cout << "Image save to output.pgm successfully.\n";
		}
		else
		{
			std::cerr << "Failed to load image.\n";
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << "\n";
	}

	return 0;
}