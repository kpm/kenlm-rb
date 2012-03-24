
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/binary_format.hh"


#include "_lm_ngram_Backing.rb.hpp"


void wrap_lm_ngram_Backing_file_set(lm::ngram::Backing* self, util::scoped_fd val) {
	self->file = val;
}
util::scoped_fd wrap_lm_ngram_Backing_file_get(lm::ngram::Backing* self) {
	return self->file;
}
void wrap_lm_ngram_Backing_vocab_set(lm::ngram::Backing* self, util::scoped_memory val) {
	self->vocab = val;
}
util::scoped_memory wrap_lm_ngram_Backing_vocab_get(lm::ngram::Backing* self) {
	return self->vocab;
}
void wrap_lm_ngram_Backing_search_set(lm::ngram::Backing* self, util::scoped_memory val) {
	self->search = val;
}
util::scoped_memory wrap_lm_ngram_Backing_search_get(lm::ngram::Backing* self) {
	return self->search;
}

void register_lm_ngram_Backing(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::Backing > rb_cBacking =  Rice::define_class_under< lm::ngram::Backing >(rb_mKenlm_Ngram, "Backing");
	rb_cBacking.define_constructor(Rice::Constructor< lm::ngram::Backing >());
	rb_cBacking.define_method("file=", &wrap_lm_ngram_Backing_file_set);
	rb_cBacking.define_method("file", &wrap_lm_ngram_Backing_file_get);
	rb_cBacking.define_method("vocab=", &wrap_lm_ngram_Backing_vocab_set);
	rb_cBacking.define_method("vocab", &wrap_lm_ngram_Backing_vocab_get);
	rb_cBacking.define_method("search=", &wrap_lm_ngram_Backing_search_set);
	rb_cBacking.define_method("search", &wrap_lm_ngram_Backing_search_get);
}
