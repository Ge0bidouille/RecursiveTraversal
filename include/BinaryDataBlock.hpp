#ifndef _DATA_CODE_BLOCK_HPP_
#define _DATA_CODE_BLOCK_HPP_

#include <cstdio>
#include "BinaryBlock.hpp"

namespace RecursiveTraversal {

	class BinaryDataBlock : public BinaryBlock {

	public:

		enum Granularity { Byte = 1, Word = 2, Dword = 4, Qword = 8 };

		BinaryDataBlock(const int64_t& address, size_t length);
		
		inline Granularity granularity() const {
			return m_granularity;
		}
		
		virtual void getDisassembled(const AbstractBinaryBlockDisassembler&) const;

	private:
		Granularity m_granularity;
		
	};

}
#endif /* _DATA_CODE_BLOCK_HPP_ */