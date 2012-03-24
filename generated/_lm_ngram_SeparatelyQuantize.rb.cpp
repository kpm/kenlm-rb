
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/quantize.hh"


#include "_lm_ngram_SeparatelyQuantize.rb.hpp"

#include "_lm_ngram_SeparatelyQuantize_Middle.rb.hpp"
#include "_lm_ngram_SeparatelyQuantize_Longest.rb.hpp"
void register_lm_ngram_SeparatelyQuantize(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::SeparatelyQuantize > rb_cSeparatelyQuantize =  Rice::define_class_under< lm::ngram::SeparatelyQuantize >(rb_mKenlm_Ngram, "SeparatelyQuantize");
register_lm_ngram_SeparatelyQuantize_Middle(rb_cSeparatelyQuantize);
register_lm_ngram_SeparatelyQuantize_Longest(rb_cSeparatelyQuantize);
	rb_cSeparatelyQuantize.define_constructor(Rice::Constructor< lm::ngram::SeparatelyQuantize >());
	rb_cSeparatelyQuantize.const_set("kModelTypeAdd", to_ruby(HASH_SORTED));
	rb_cSeparatelyQuantize.const_set("kTrain", to_ruby(true));

	{
		typedef void ( *UpdateConfigFromBinary_func_type )( int fd, const std::vector<unsigned long, std::allocator<unsigned long> >& counts, lm::ngram::Config& config );
		rb_cSeparatelyQuantize.define_singleton_method("update_config_from_binary", UpdateConfigFromBinary_func_type( &lm::ngram::SeparatelyQuantize::UpdateConfigFromBinary ), (Rice::Arg("fd"), Rice::Arg("counts"), Rice::Arg("config")));
	}

	{
		typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size_type ( *Size_func_type )( ::uint8_t order, const lm::ngram::Config& config );
		rb_cSeparatelyQuantize.define_singleton_method("size", Size_func_type( &lm::ngram::SeparatelyQuantize::Size ), (Rice::Arg("order"), Rice::Arg("config")));
	}

	{
		typedef ::uint8_t ( *MiddleBits_func_type )( const lm::ngram::Config& config );
		rb_cSeparatelyQuantize.define_singleton_method("middle_bits", MiddleBits_func_type( &lm::ngram::SeparatelyQuantize::MiddleBits ), (Rice::Arg("config")));
	}

	{
		typedef ::uint8_t ( *LongestBits_func_type )( const lm::ngram::Config& config );
		rb_cSeparatelyQuantize.define_singleton_method("longest_bits", LongestBits_func_type( &lm::ngram::SeparatelyQuantize::LongestBits ), (Rice::Arg("config")));
	}

	{
		typedef void ( lm::ngram::SeparatelyQuantize::*SetupMemory_func_type )( void* start, const lm::ngram::Config& config );
		rb_cSeparatelyQuantize.define_method("setup_memory", SetupMemory_func_type( &lm::ngram::SeparatelyQuantize::SetupMemory ), (Rice::Arg("start"), Rice::Arg("config")));
	}

	{
		typedef void ( lm::ngram::SeparatelyQuantize::*Train_func_type )( ::uint8_t order, std::vector<float, std::allocator<float> >& prob, std::vector<float, std::allocator<float> >& backoff );
		rb_cSeparatelyQuantize.define_method("train", Train_func_type( &lm::ngram::SeparatelyQuantize::Train ), (Rice::Arg("order"), Rice::Arg("prob"), Rice::Arg("backoff")));
	}

	{
		typedef void ( lm::ngram::SeparatelyQuantize::*TrainProb_func_type )( ::uint8_t order, std::vector<float, std::allocator<float> >& prob );
		rb_cSeparatelyQuantize.define_method("train_prob", TrainProb_func_type( &lm::ngram::SeparatelyQuantize::TrainProb ), (Rice::Arg("order"), Rice::Arg("prob")));
	}

	{
		typedef void ( lm::ngram::SeparatelyQuantize::*FinishedLoading_func_type )( const lm::ngram::Config& config );
		rb_cSeparatelyQuantize.define_method("finished_loading", FinishedLoading_func_type( &lm::ngram::SeparatelyQuantize::FinishedLoading ), (Rice::Arg("config")));
	}

	{
		typedef lm::ngram::SeparatelyQuantize::Middle ( lm::ngram::SeparatelyQuantize::*Mid_func_type )( ::uint8_t order ) const;
		rb_cSeparatelyQuantize.define_method("mid", Mid_func_type( &lm::ngram::SeparatelyQuantize::Mid ), (Rice::Arg("order")));
	}

	{
		typedef lm::ngram::SeparatelyQuantize::Longest ( lm::ngram::SeparatelyQuantize::*Long_func_type )( ::uint8_t order ) const;
		rb_cSeparatelyQuantize.define_method("long", Long_func_type( &lm::ngram::SeparatelyQuantize::Long ), (Rice::Arg("order")));
	}
}
