#include "donut.h"
#include "position.h"
#include "circularscanner.h"
#include <fstream>

int main() {
	// Set up a donut PSF
	double donutRadius = 0.1; // in um;
	Position donutCenter(0.0, 0.0);
	Donut donut(donutRadius, donutCenter);

	// Initialize the scanning procedure
	double scanningRadius = 0.05;
	int scanningSteps = 1000;
	CircularScanner scanner(scanningRadius, scanningSteps);

	// Set up a molecule near the center
	Position molecule_position(0.02, 0.02);

	// Calculate the excitation intensity at the molecule position for each step,
	// scanning twice around the circle and write the data to a file
	double excitationIntensity[2 * scanningSteps];
	std::ofstream output("scanvalues.txt");
	for(int i = 0; i < 2 * scanningSteps; i++) {
		donut.setCenter(scanner.nextPosition());
		excitationIntensity[i] = donut.valueAt(molecule_position);
		output << excitationIntensity[i] << std::endl;
	}
}
