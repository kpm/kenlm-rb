
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/quantize.hh"


#include "_lm_ngram_SeparatelyQuantize_Middle.rb.hpp"

void register_lm_ngram_SeparatelyQuantize_Middle(Rice::Data_Type< lm::ngram::SeparatelyQuantize > rb_cSeparatelyQuantize) {
	Rice::Data_Type< lm::ngram::SeparatelyQuantize::Middle > rb_cMiddle =  Rice::define_class_under< lm::ngram::SeparatelyQuantize::Middle >(rb_cSeparatelyQuantize, "Middle");
	rb_cMiddle.define_constructor(Rice::Constructor< lm::ngram::SeparatelyQuantize::Middle,::uint8_t,const float*,::uint8_t,const float* >());

	{
		typedef void ( lm::ngram::SeparatelyQuantize::Middle::*Write_func_type )( void* base, ::uint64_t bit_offset, float prob, float backoff ) const;
		rb_cMiddle.define_method("write", Write_func_type( &lm::ngram::SeparatelyQuantize::Middle::Write ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob"), Rice::Arg("backoff")));
	}

	{
		typedef void ( lm::ngram::SeparatelyQuantize::Middle::*ReadProb_func_type )( const void* base, ::uint64_t bit_offset, float& prob ) const;
		rb_cMiddle.define_method("read_prob", ReadProb_func_type( &lm::ngram::SeparatelyQuantize::Middle::ReadProb ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob")));
	}

	{
		typedef void ( lm::ngram::SeparatelyQuantize::Middle::*Read_func_type )( const void* base, ::uint64_t bit_offset, float& prob, float& backoff ) const;
		rb_cMiddle.define_method("read", Read_func_type( &lm::ngram::SeparatelyQuantize::Middle::Read ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob"), Rice::Arg("backoff")));
	}

	{
		typedef void ( lm::ngram::SeparatelyQuantize::Middle::*ReadBackoff_func_type )( const void* base, ::uint64_t bit_offset, float& backoff ) const;
		rb_cMiddle.define_method("read_backoff", ReadBackoff_func_type( &lm::ngram::SeparatelyQuantize::Middle::ReadBackoff ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("backoff")));
	}

	{
		typedef ::uint8_t ( lm::ngram::SeparatelyQuantize::Middle::*TotalBits_func_type )(  ) const;
		rb_cMiddle.define_method("total_bits", TotalBits_func_type( &lm::ngram::SeparatelyQuantize::Middle::TotalBits ));
	}
}
