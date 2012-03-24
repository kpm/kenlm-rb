
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/vocab.hh"


#include "_lm_ngram_WriteWordsWrapper.rb.hpp"

void register_lm_ngram_WriteWordsWrapper(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::WriteWordsWrapper > rb_cWriteWordsWrapper =  Rice::define_class_under< lm::ngram::WriteWordsWrapper,lm::EnumerateVocab >(rb_mKenlm_Ngram, "WriteWordsWrapper");
	rb_cWriteWordsWrapper.define_constructor(Rice::Constructor< lm::ngram::WriteWordsWrapper,lm::EnumerateVocab* >());

	{
		typedef void ( lm::ngram::WriteWordsWrapper::*Add_func_type )( lm::WordIndex index, const StringPiece& str );
		rb_cWriteWordsWrapper.define_method("add", Add_func_type( &lm::ngram::WriteWordsWrapper::Add ), (Rice::Arg("index"), Rice::Arg("str")));
	}

	{
		typedef void ( lm::ngram::WriteWordsWrapper::*Write_func_type )( int fd );
		rb_cWriteWordsWrapper.define_method("write", Write_func_type( &lm::ngram::WriteWordsWrapper::Write ), (Rice::Arg("fd")));
	}
}
