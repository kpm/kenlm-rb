
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/vocab.hh"


#include "_lm_ngram_SortedVocabulary.rb.hpp"

void register_lm_ngram_SortedVocabulary(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::SortedVocabulary > rb_cSortedVocabulary =  Rice::define_class_under< lm::ngram::SortedVocabulary,lm::base::Vocabulary >(rb_mKenlm_Ngram, "SortedVocabulary");
	rb_cSortedVocabulary.define_constructor(Rice::Constructor< lm::ngram::SortedVocabulary >());

	{
		typedef ::LMWordIndex ( lm::ngram::SortedVocabulary::*Index_func_type )( const StringPiece& str ) const;
		rb_cSortedVocabulary.define_method("index", Index_func_type( &lm::ngram::SortedVocabulary::Index ), (Rice::Arg("str")));
	}

	{
		typedef StringPiece::size_type ( *Size_func_type )( std::size_t entries, const lm::ngram::Config& config );
		rb_cSortedVocabulary.define_singleton_method("size", Size_func_type( &lm::ngram::SortedVocabulary::Size ), (Rice::Arg("entries"), Rice::Arg("config")));
	}

	{
		typedef ::LMWordIndex ( lm::ngram::SortedVocabulary::*Bound_func_type )(  ) const;
		rb_cSortedVocabulary.define_method("bound", Bound_func_type( &lm::ngram::SortedVocabulary::Bound ));
	}

	{
		typedef void ( lm::ngram::SortedVocabulary::*SetupMemory_func_type )( void* start, std::size_t allocated, std::size_t entries, const lm::ngram::Config& config );
		rb_cSortedVocabulary.define_method("setup_memory", SetupMemory_func_type( &lm::ngram::SortedVocabulary::SetupMemory ), (Rice::Arg("start"), Rice::Arg("allocated"), Rice::Arg("entries"), Rice::Arg("config")));
	}

	{
		typedef void ( lm::ngram::SortedVocabulary::*ConfigureEnumerate_func_type )( lm::EnumerateVocab* to, std::size_t max_entries );
		rb_cSortedVocabulary.define_method("configure_enumerate", ConfigureEnumerate_func_type( &lm::ngram::SortedVocabulary::ConfigureEnumerate ), (Rice::Arg("to"), Rice::Arg("max_entries")));
	}

	{
		typedef ::LMWordIndex ( lm::ngram::SortedVocabulary::*Insert_func_type )( const StringPiece& str );
		rb_cSortedVocabulary.define_method("insert", Insert_func_type( &lm::ngram::SortedVocabulary::Insert ), (Rice::Arg("str")));
	}

	{
		typedef void ( lm::ngram::SortedVocabulary::*FinishedLoading_func_type )( lm::ProbBackoff* reorder_vocab );
		rb_cSortedVocabulary.define_method("finished_loading", FinishedLoading_func_type( &lm::ngram::SortedVocabulary::FinishedLoading ), (Rice::Arg("reorder_vocab")));
	}

	{
		typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size_type ( lm::ngram::SortedVocabulary::*UnkCountChangePadding_func_type )(  ) const;
		rb_cSortedVocabulary.define_method("unk_count_change_padding", UnkCountChangePadding_func_type( &lm::ngram::SortedVocabulary::UnkCountChangePadding ));
	}

	{
		typedef bool ( lm::ngram::SortedVocabulary::*SawUnk_func_type )(  ) const;
		rb_cSortedVocabulary.define_method("saw_unk", SawUnk_func_type( &lm::ngram::SortedVocabulary::SawUnk ));
	}

	{
		typedef void ( lm::ngram::SortedVocabulary::*LoadedBinary_func_type )( int fd, lm::EnumerateVocab* to );
		rb_cSortedVocabulary.define_method("loaded_binary", LoadedBinary_func_type( &lm::ngram::SortedVocabulary::LoadedBinary ), (Rice::Arg("fd"), Rice::Arg("to")));
	}
}
