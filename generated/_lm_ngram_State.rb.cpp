
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "lm/model.hh"


#include "_lm_ngram_State.rb.hpp"


void wrap_lm_ngram_State_words_set(lm::ngram::State* self, lm::WordIndex[5] val) {
	self->words = val;
}
lm::WordIndex[5] wrap_lm_ngram_State_words_get(lm::ngram::State* self) {
	return self->words;
}
void wrap_lm_ngram_State_backoff_set(lm::ngram::State* self, float[5] val) {
	self->backoff = val;
}
float[5] wrap_lm_ngram_State_backoff_get(lm::ngram::State* self) {
	return self->backoff;
}
void wrap_lm_ngram_State_length_set(lm::ngram::State* self, unsigned char val) {
	self->length = val;
}
unsigned char wrap_lm_ngram_State_length_get(lm::ngram::State* self) {
	return self->length;
}

void register_lm_ngram_State(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::State > rb_cState =  Rice::define_class_under< lm::ngram::State >(rb_mKenlm_Ngram, "State");
	rb_cState.define_constructor(Rice::Constructor< lm::ngram::State >());
	rb_cState.define_method("words=", &wrap_lm_ngram_State_words_set);
	rb_cState.define_method("words", &wrap_lm_ngram_State_words_get);
	rb_cState.define_method("backoff=", &wrap_lm_ngram_State_backoff_set);
	rb_cState.define_method("backoff", &wrap_lm_ngram_State_backoff_get);
	rb_cState.define_method("length=", &wrap_lm_ngram_State_length_set);
	rb_cState.define_method("length", &wrap_lm_ngram_State_length_get);

	{
		typedef int ( lm::ngram::State::*Compare_func_type )( const lm::ngram::State& other ) const;
		rb_cState.define_method("compare", Compare_func_type( &lm::ngram::State::Compare ), (Rice::Arg("other")));
	}

	{
		typedef void ( lm::ngram::State::*ZeroRemaining_func_type )(  );
		rb_cState.define_method("zero_remaining", ZeroRemaining_func_type( &lm::ngram::State::ZeroRemaining ));
	}

	{
		typedef unsigned char ( lm::ngram::State::*Length_func_type )(  ) const;
		rb_cState.define_method("length", Length_func_type( &lm::ngram::State::Length ));
	}
}
