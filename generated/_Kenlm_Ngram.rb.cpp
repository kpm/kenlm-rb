
#include <rice/Module.hpp>
#include <rice/Enum.hpp>
#include "lm/model.hh"
#include "/home/kmeyer/dev/kenlm/lm/vocab.hh"
#include "/home/kmeyer/dev/kenlm/lm/model_type.hh"
#include "/home/kmeyer/dev/kenlm/lm/blank.hh"
#include "/home/kmeyer/dev/kenlm/lm/binary_format.hh"


#include "_Kenlm_Ngram.rb.hpp"

#include "_lm_ngram_Config.rb.hpp"
#include "_lm_ngram_Parameters.rb.hpp"
#include "_lm_ngram_FixedWidthParameters.rb.hpp"
#include "_lm_ngram_SeparatelyQuantize.rb.hpp"
#include "_lm_ngram_Backing.rb.hpp"
#include "_lm_ngram_State.rb.hpp"
#include "_lm_ngram_DontQuantize.rb.hpp"
#include "_lm_ngram_SortedVocabulary.rb.hpp"
#include "_lm_ngram_WriteWordsWrapper.rb.hpp"
#include "_lm_ngram_Vocabulary.rb.hpp"
void register_Kenlm_Ngram(Rice::Module rb_mKenlm) {
	Rice::Module rb_mKenlm_Ngram =  Rice::define_module_under(rb_mKenlm, "Ngram");

	{
		typedef ::uint8_t* ( *SetupJustVocab_func_type )( const lm::ngram::Config& config, ::uint8_t order, std::size_t memory_size, lm::ngram::Backing& backing );
		rb_mKenlm_Ngram.define_module_function("setup_just_vocab", SetupJustVocab_func_type( &lm::ngram::SetupJustVocab ), (Rice::Arg("config"), Rice::Arg("order"), Rice::Arg("memory_size"), Rice::Arg("backing")));
	}
register_lm_ngram_Config(rb_mKenlm_Ngram);
register_lm_ngram_Parameters(rb_mKenlm_Ngram);
register_lm_ngram_FixedWidthParameters(rb_mKenlm_Ngram);
register_lm_ngram_SeparatelyQuantize(rb_mKenlm_Ngram);
register_lm_ngram_Backing(rb_mKenlm_Ngram);
register_lm_ngram_State(rb_mKenlm_Ngram);
register_lm_ngram_DontQuantize(rb_mKenlm_Ngram);
register_lm_ngram_SortedVocabulary(rb_mKenlm_Ngram);
register_lm_ngram_WriteWordsWrapper(rb_mKenlm_Ngram);
register_lm_ngram_Vocabulary(rb_mKenlm_Ngram);

	{
		typedef void ( *FinishFile_func_type )( const lm::ngram::Config& config, lm::ngram::ModelType model_type, unsigned int search_version, const std::vector<unsigned long, std::allocator<unsigned long> >& counts, lm::ngram::Backing& backing );
		rb_mKenlm_Ngram.define_module_function("finish_file", FinishFile_func_type( &lm::ngram::FinishFile ), (Rice::Arg("config"), Rice::Arg("model_type"), Rice::Arg("search_version"), Rice::Arg("counts"), Rice::Arg("backing")));
	}

	{
		typedef void ( *MissingUnknown_func_type )( const lm::ngram::Config& config );
		rb_mKenlm_Ngram.define_module_function("missing_unknown", MissingUnknown_func_type( &lm::ngram::MissingUnknown ), (Rice::Arg("config")));
	}

	{
		typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size_type ( *Align8_func_type )( std::size_t in );
		rb_mKenlm_Ngram.define_module_function("align8", Align8_func_type( &lm::ngram::Align8 ), (Rice::Arg("in")));
	}

	{
		typedef void ( *MissingSentenceMarker_func_type )( const lm::ngram::Config& config, const char* str );
		rb_mKenlm_Ngram.define_module_function("missing_sentence_marker", MissingSentenceMarker_func_type( &lm::ngram::MissingSentenceMarker ), (Rice::Arg("config"), Rice::Arg("str")));
	}

	{
		typedef StringPiece::size_type ( *hash_value_func_type )( const lm::ngram::State& state );
		rb_mKenlm_Ngram.define_module_function("hash_value", hash_value_func_type( &lm::ngram::hash_value ), (Rice::Arg("state")));
	}

	{
		typedef void ( *AdvanceOrThrow_func_type )( int fd, ::off_t off );
		rb_mKenlm_Ngram.define_module_function("advance_or_throw", AdvanceOrThrow_func_type( &lm::ngram::AdvanceOrThrow ), (Rice::Arg("fd"), Rice::Arg("off")));
	}

	{
		typedef void ( *SeekOrThrow_func_type )( int fd, ::off_t off );
		rb_mKenlm_Ngram.define_module_function("seek_or_throw", SeekOrThrow_func_type( &lm::ngram::SeekOrThrow ), (Rice::Arg("fd"), Rice::Arg("off")));
	}

	{
		typedef void ( *SetExtension_func_type )( float& backoff );
		rb_mKenlm_Ngram.define_module_function("set_extension", SetExtension_func_type( &lm::ngram::SetExtension ), (Rice::Arg("backoff")));
	}

	{
		typedef bool ( *HasExtension_func_type )( const float& backoff );
		rb_mKenlm_Ngram.define_module_function("has_extension", HasExtension_func_type( &lm::ngram::HasExtension ), (Rice::Arg("backoff")));
	}

	{
		typedef ::uint8_t* ( *GrowForSearch_func_type )( const lm::ngram::Config& config, std::size_t vocab_pad, std::size_t memory_size, lm::ngram::Backing& backing );
		rb_mKenlm_Ngram.define_module_function("grow_for_search", GrowForSearch_func_type( &lm::ngram::GrowForSearch ), (Rice::Arg("config"), Rice::Arg("vocab_pad"), Rice::Arg("memory_size"), Rice::Arg("backing")));
	}
	Rice::Enum<lm::ngram::ModelType> rb_eModelType = Rice::define_enum<lm::ngram::ModelType>("ModelType", rb_mKenlm_Ngram);
	rb_eModelType.define_value("HASH_PROBING", lm::ngram::HASH_PROBING);
	rb_eModelType.define_value("HASH_SORTED", lm::ngram::HASH_SORTED);
	rb_eModelType.define_value("TRIE_SORTED", lm::ngram::TRIE_SORTED);
	rb_eModelType.define_value("QUANT_TRIE_SORTED", lm::ngram::QUANT_TRIE_SORTED);
	rb_eModelType.define_value("ARRAY_TRIE_SORTED", lm::ngram::ARRAY_TRIE_SORTED);
	rb_eModelType.define_value("QUANT_ARRAY_TRIE_SORTED", lm::ngram::QUANT_ARRAY_TRIE_SORTED);

	{
		typedef bool ( *RecognizeBinary_func_type )( const char* file, lm::ngram::ModelType& recognized );
		rb_mKenlm_Ngram.define_module_function("recognize_binary", RecognizeBinary_func_type( &lm::ngram::RecognizeBinary ), (Rice::Arg("file"), Rice::Arg("recognized")));
	}
}
