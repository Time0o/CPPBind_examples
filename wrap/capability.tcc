#include <l4/re/dataspace>
#include <l4/re/mem_alloc>
#include <l4/re/rm>

namespace L4
{

template class Cap<L4Re::Dataspace>;
template class Cap<L4Re::Mem_alloc>;
template class Cap<L4Re::Rm>;

}
