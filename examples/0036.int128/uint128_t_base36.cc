#include"../../include/fast_io.h"
#include"../../include/fast_io_in.h"

int main()
{
	__int128_t a,b;
	scan(fast_io::base<36>(a),fast_io::base<36>(b));
	println(fast_io::baseupper<36>(a),"(dec:",a,")+",fast_io::baseupper<36>(b),"(dec:",b,")=",fast_io::baseupper<36>(a+b),"(dec:",a+b,")");
}