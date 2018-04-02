// C++ includes
#include <string>

// ROOT includes
#include <TROOT.h>

//LOCAL INCLUDES
#include "VMEAnalyzer.hh"

using namespace std;

int main(int argc, char **argv) {
  gROOT->SetBatch();

  VMEAnalyzer* analyzer = new VMEAnalyzer(argc, argv);
  
  //analyzer->GetCommandLineArgs(argc, argv);
  analyzer->LoadCalibration();
  analyzer->RunEventsLoop();
  analyzer->~VMEAnalyzer();
  /*
  VMEAnalyzer analyzer;

  analyzer.GetCommandLineArgs(argc, argv);
  analyzer.LoadCalibration();
  analyzer.RunEventsLoop();
  */
  std::cout << "here" << std::endl;
  return 0;
}
