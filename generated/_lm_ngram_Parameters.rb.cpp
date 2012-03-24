
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/binary_format.hh"


#include "_lm_ngram_Parameters.rb.hpp"


void wrap_lm_ngram_Parameters_fixed_set(lm::ngram::Parameters* self, lm::ngram::FixedWidthParameters val) {
	self->fixed = val;
}
lm::ngram::FixedWidthParameters wrap_lm_ngram_Parameters_fixed_get(lm::ngram::Parameters* self) {
	return self->fixed;
}
void wrap_lm_ngram_Parameters_counts_set(lm::ngram::Parameters* self, std::vector<unsigned long, std::allocator<unsigned long> > val) {
	self->counts = val;
}
std::vector<unsigned long, std::allocator<unsigned long> > wrap_lm_ngram_Parameters_counts_get(lm::ngram::Parameters* self) {
	return self->counts;
}

void register_lm_ngram_Parameters(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::Parameters > rb_cParameters =  Rice::define_class_under< lm::ngram::Parameters >(rb_mKenlm_Ngram, "Parameters");
	rb_cParameters.define_constructor(Rice::Constructor< lm::ngram::Parameters >());
	rb_cParameters.define_method("fixed=", &wrap_lm_ngram_Parameters_fixed_set);
	rb_cParameters.define_method("fixed", &wrap_lm_ngram_Parameters_fixed_get);
	rb_cParameters.define_method("counts=", &wrap_lm_ngram_Parameters_counts_set);
	rb_cParameters.define_method("counts", &wrap_lm_ngram_Parameters_counts_get);
}
