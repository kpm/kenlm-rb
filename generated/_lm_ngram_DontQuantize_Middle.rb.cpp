
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/quantize.hh"


#include "_lm_ngram_DontQuantize_Middle.rb.hpp"

void register_lm_ngram_DontQuantize_Middle(Rice::Data_Type< lm::ngram::DontQuantize > rb_cDontQuantize) {
	Rice::Data_Type< lm::ngram::DontQuantize::Middle > rb_cMiddle =  Rice::define_class_under< lm::ngram::DontQuantize::Middle >(rb_cDontQuantize, "Middle");
	rb_cMiddle.define_constructor(Rice::Constructor< lm::ngram::DontQuantize::Middle >());

	{
		typedef void ( lm::ngram::DontQuantize::Middle::*Write_func_type )( void* base, ::uint64_t bit_offset, float prob, float backoff ) const;
		rb_cMiddle.define_method("write", Write_func_type( &lm::ngram::DontQuantize::Middle::Write ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob"), Rice::Arg("backoff")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::Middle::*Read_func_type )( const void* base, ::uint64_t bit_offset, float& prob, float& backoff ) const;
		rb_cMiddle.define_method("read", Read_func_type( &lm::ngram::DontQuantize::Middle::Read ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob"), Rice::Arg("backoff")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::Middle::*ReadProb_func_type )( const void* base, ::uint64_t bit_offset, float& prob ) const;
		rb_cMiddle.define_method("read_prob", ReadProb_func_type( &lm::ngram::DontQuantize::Middle::ReadProb ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("prob")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::Middle::*ReadBackoff_func_type )( const void* base, ::uint64_t bit_offset, float& backoff ) const;
		rb_cMiddle.define_method("read_backoff", ReadBackoff_func_type( &lm::ngram::DontQuantize::Middle::ReadBackoff ), (Rice::Arg("base"), Rice::Arg("bit_offset"), Rice::Arg("backoff")));
	}

	{
		typedef ::uint8_t ( lm::ngram::DontQuantize::Middle::*TotalBits_func_type )(  ) const;
		rb_cMiddle.define_method("total_bits", TotalBits_func_type( &lm::ngram::DontQuantize::Middle::TotalBits ));
	}
}
