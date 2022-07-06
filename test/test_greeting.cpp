#include "../greeting.hpp"
#include <sstream>
#include <cassert>

int main() {
    std::ostringstream output_buffer;

    say_hello(output_buffer);
    
    std::ostringstream expected_buffer;
    expected_buffer << "Hello world\n";

    assert(output_buffer.str().compare(expected_buffer.str()) == 0);
   
    return 0;
}