#include <clients/nrt/BufferComposeNRT.hpp>
#include <FluidMaxWrapper.hpp>

void ext_main(void *r)
{
  using namespace fluid::client;
  makeMaxWrapper<BufferComposeClient, double,float>("fluid.bufcompose~", BufComposeParams);
}
