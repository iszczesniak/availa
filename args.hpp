#ifndef ARGS_HPP
#define ARGS_HPP

#include <string>

using namespace std;

/**
 * These are the program arguments.  In this single class we store all
 * information passed at the command line.
 */
struct args
{
  /// Splitting ratio.
  int sratio;

  /// OLT availability;
  double olta;

  /// ONU availability;
  double onua;

  /// Passive RN availability;
  double prna;

  /// Active RN availability;
  double arna;

  /// The availability of the feeder fiber.
  double ffa;

  /// The availability of the distribution fiber.
  double dfa;

  /// The availability of the last-mile fiber.
  double lfa;

  /// The probability that a remote node is active.
  double q;

  /// The probability that an ONU is connected to the other operator.
  double r;

  /// The probability that a fiber from a RN leads to the next stage.
  double s;

  /// The seed.
  int seed;

  /// The number of stages of the PON.
  int stages;
};

/**
 * This function parses the command-line arguments.
 */
args
process_args(int argc, const char* argv[]);

#endif /* SDI_ARGS_HPP */
