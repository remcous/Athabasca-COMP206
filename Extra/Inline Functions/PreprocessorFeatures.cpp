// PreprocessorFeatures.cpp

// String concatenation
#define DEBUG(x) cout << #x " = " << x << endl;

// Stringizing (note this statement used in a one line for loop will only execute the first statement, using a comma instead of a semi colon will correct this)
#define TRACE(s) cerr << #s << endl; s

// Token Pasting
#define FIELD(a) char* a##_string; int a##_size