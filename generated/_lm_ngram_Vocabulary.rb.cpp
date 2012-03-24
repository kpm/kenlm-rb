
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/vocab.hh"


#include "_lm_ngram_Vocabulary.rb.hpp"

void register_lm_ngram_Vocabulary(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::Vocabulary > rb_cVocabulary =  Rice::define_class_under< lm::ngram::Vocabulary,lm::base::Vocabulary >(rb_mKenlm_Ngram, "Vocabulary");
	rb_cVocabulary.define_constructor(Rice::Constructor< lm::ngram::ProbingVocabulary >());

	{
		typedef ::LMWordIndex ( lm::ngram::ProbingVocabulary::*Index_func_type )( const StringPiece& str ) const;
		rb_cVocabulary.define_method("index", Index_func_type( &lm::ngram::ProbingVocabulary::Index ), (Rice::Arg("str")));
	}

	{
		typedef StringPiece::size_type ( *Size_func_type )( std::size_t entries, const lm::ngram::Config& config );
		rb_cVocabulary.define_singleton_method("size", Size_func_type( &lm::ngram::ProbingVocabulary::Size ), (Rice::Arg("entries"), Rice::Arg("config")));
	}

	{
		typedef ::LMWordIndex ( lm::ngram::ProbingVocabulary::*Bound_func_type )(  ) const;
		rb_cVocabulary.define_method("bound", Bound_func_type( &lm::ngram::ProbingVocabulary::Bound ));
	}

	{
		typedef void ( lm::ngram::ProbingVocabulary::*SetupMemory_func_type )( void* start, std::size_t allocated, std::size_t entries, const lm::ngram::Config& config );
		rb_cVocabulary.define_method("setup_memory", SetupMemory_func_type( &lm::ngram::ProbingVocabulary::SetupMemory ), (Rice::Arg("start"), Rice::Arg("allocated"), Rice::Arg("entries"), Rice::Arg("config")));
	}

	{
		typedef void ( lm::ngram::ProbingVocabulary::*ConfigureEnumerate_func_type )( lm::EnumerateVocab* to, std::size_t max_entries );
		rb_cVocabulary.define_method("configure_enumerate", ConfigureEnumerate_func_type( &lm::ngram::ProbingVocabulary::ConfigureEnumerate ), (Rice::Arg("to"), Rice::Arg("max_entries")));
	}

	{
		typedef ::LMWordIndex ( lm::ngram::ProbingVocabulary::*Insert_func_type )( const StringPiece& str );
		rb_cVocabulary.define_method("insert", Insert_func_type( &lm::ngram::ProbingVocabulary::Insert ), (Rice::Arg("str")));
	}

	{
		typedef void ( lm::ngram::ProbingVocabulary::*FinishedLoading_func_type )( lm::ProbBackoff* reorder_vocab );
		rb_cVocabulary.define_method("finished_loading", FinishedLoading_func_type( &lm::ngram::ProbingVocabulary::FinishedLoading ), (Rice::Arg("reorder_vocab")));
	}

	{
		typedef bool ( lm::ngram::ProbingVocabulary::*SawUnk_func_type )(  ) const;
		rb_cVocabulary.define_method("saw_unk", SawUnk_func_type( &lm::ngram::ProbingVocabulary::SawUnk ));
	}

	{
		typedef void ( lm::ngram::ProbingVocabulary::*LoadedBinary_func_type )( int fd, lm::EnumerateVocab* to );
		rb_cVocabulary.define_method("loaded_binary", LoadedBinary_func_type( &lm::ngram::ProbingVocabulary::LoadedBinary ), (Rice::Arg("fd"), Rice::Arg("to")));
	}
}
