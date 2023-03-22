struct testChoices {
  int mode;     // 1 2 3 
  int duration; // 1 2
  int pvm_freq; // 1 2 3 
};

struct MEMORY_EXTENSION_PINS {
  const int CS = 53;    // SPI chip select pin
  const int DO = 50;    // SPI data out pin
  const int DI = 51;    // SPI data in pin
  const int CLK = 52;   // SPI clock pin
  const int CD = 49;    // Card detect pin I/O
};