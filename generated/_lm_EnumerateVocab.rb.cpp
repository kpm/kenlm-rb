
#include <rice/Data_Type.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/enumerate_vocab.hh"


#include "_lm_EnumerateVocab.rb.hpp"

void register_lm_EnumerateVocab(Rice::Module rb_mKenlm) {
	Rice::Data_Type< lm::EnumerateVocab > rb_cEnumerateVocab =  Rice::define_class_under< lm::EnumerateVocab >(rb_mKenlm, "EnumerateVocab");

	{
		typedef void ( lm::EnumerateVocab::*Add_func_type )( lm::WordIndex index, const StringPiece& str );
		rb_cEnumerateVocab.define_method("add", Add_func_type( &lm::EnumerateVocab::Add ), (Rice::Arg("index"), Rice::Arg("str")));
	}
}
