
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/quantize.hh"


#include "_lm_ngram_DontQuantize.rb.hpp"

#include "_lm_ngram_DontQuantize_Middle.rb.hpp"
#include "_lm_ngram_DontQuantize_Longest.rb.hpp"
void register_lm_ngram_DontQuantize(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::DontQuantize > rb_cDontQuantize =  Rice::define_class_under< lm::ngram::DontQuantize >(rb_mKenlm_Ngram, "DontQuantize");
register_lm_ngram_DontQuantize_Middle(rb_cDontQuantize);
register_lm_ngram_DontQuantize_Longest(rb_cDontQuantize);
	rb_cDontQuantize.define_constructor(Rice::Constructor< lm::ngram::DontQuantize >());
	rb_cDontQuantize.const_set("kModelTypeAdd", to_ruby(HASH_PROBING));
	rb_cDontQuantize.const_set("kTrain", to_ruby(false));

	{
		typedef void ( *UpdateConfigFromBinary_func_type )( int , const std::vector<unsigned long, std::allocator<unsigned long> >& , lm::ngram::Config&  );
		rb_cDontQuantize.define_singleton_method("update_config_from_binary", UpdateConfigFromBinary_func_type( &lm::ngram::DontQuantize::UpdateConfigFromBinary ), (Rice::Arg(""), Rice::Arg(""), Rice::Arg("")));
	}

	{
		typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size_type ( *Size_func_type )( ::uint8_t , const lm::ngram::Config&  );
		rb_cDontQuantize.define_singleton_method("size", Size_func_type( &lm::ngram::DontQuantize::Size ), (Rice::Arg(""), Rice::Arg("")));
	}

	{
		typedef ::uint8_t ( *MiddleBits_func_type )( const lm::ngram::Config&  );
		rb_cDontQuantize.define_singleton_method("middle_bits", MiddleBits_func_type( &lm::ngram::DontQuantize::MiddleBits ), (Rice::Arg("")));
	}

	{
		typedef ::uint8_t ( *LongestBits_func_type )( const lm::ngram::Config&  );
		rb_cDontQuantize.define_singleton_method("longest_bits", LongestBits_func_type( &lm::ngram::DontQuantize::LongestBits ), (Rice::Arg("")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::*SetupMemory_func_type )( void* , const lm::ngram::Config&  );
		rb_cDontQuantize.define_method("setup_memory", SetupMemory_func_type( &lm::ngram::DontQuantize::SetupMemory ), (Rice::Arg(""), Rice::Arg("")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::*Train_func_type )( ::uint8_t , std::vector<float, std::allocator<float> >& , std::vector<float, std::allocator<float> >&  );
		rb_cDontQuantize.define_method("train", Train_func_type( &lm::ngram::DontQuantize::Train ), (Rice::Arg(""), Rice::Arg(""), Rice::Arg("")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::*TrainProb_func_type )( ::uint8_t , std::vector<float, std::allocator<float> >&  );
		rb_cDontQuantize.define_method("train_prob", TrainProb_func_type( &lm::ngram::DontQuantize::TrainProb ), (Rice::Arg(""), Rice::Arg("")));
	}

	{
		typedef void ( lm::ngram::DontQuantize::*FinishedLoading_func_type )( const lm::ngram::Config&  );
		rb_cDontQuantize.define_method("finished_loading", FinishedLoading_func_type( &lm::ngram::DontQuantize::FinishedLoading ), (Rice::Arg("")));
	}

	{
		typedef lm::ngram::DontQuantize::Middle ( lm::ngram::DontQuantize::*Mid_func_type )( ::uint8_t  ) const;
		rb_cDontQuantize.define_method("mid", Mid_func_type( &lm::ngram::DontQuantize::Mid ), (Rice::Arg("")));
	}

	{
		typedef lm::ngram::DontQuantize::Longest ( lm::ngram::DontQuantize::*Long_func_type )( ::uint8_t  ) const;
		rb_cDontQuantize.define_method("long", Long_func_type( &lm::ngram::DontQuantize::Long ), (Rice::Arg("")));
	}
}
