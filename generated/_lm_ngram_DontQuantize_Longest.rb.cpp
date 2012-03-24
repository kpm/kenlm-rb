
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/quantize.hh"


#include "_lm_ngram_DontQuantize_Longest.rb.hpp"

void register_lm_ngram_DontQuantize_Longest(Rice::Data_Type< lm::ngram::DontQuantize > rb_cDontQuantize) {
	Rice::Data_Type< lm::ngram::DontQuantize::Longest > rb_cLongest =  Rice::define_class_under< lm::ngram::DontQuantize::Longest >(rb_cDontQuantize, "Longest");
	rb_cLongest.define_constructor(Rice::Constructor< lm::ngram::DontQuantize::Longest >());

	{
		typedef void ( lm::ngram::DontQuantize::Longest::*Write_func_type )( void* base, ::uint64_t bit_offset, float prob ) const;
		rb_cLongest.define_method("write", Write_func_type( &lm::ngram::DontQuantize::Longest::Write ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::Longest::*Read_func_type )( const void* base, ::uint64_t bit_offset, float& prob ) const;
		rb_cLongest.define_method("read", Read_func_type( &lm::ngram::DontQuantize::Longest::Read ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob")));
	}

	{
		typedef ::uint8_t ( lm::ngram::DontQuantize::Longest::*TotalBits_func_type )(  ) const;
		rb_cLongest.define_method("total_bits", TotalBits_func_type( &lm::ngram::DontQuantize::Longest::TotalBits ));
	}
}
