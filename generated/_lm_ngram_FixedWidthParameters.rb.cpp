
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/binary_format.hh"


#include "_lm_ngram_FixedWidthParameters.rb.hpp"


void wrap_lm_ngram_FixedWidthParameters_order_set(lm::ngram::FixedWidthParameters* self, unsigned char val) {
	self->order = val;
}
unsigned char wrap_lm_ngram_FixedWidthParameters_order_get(lm::ngram::FixedWidthParameters* self) {
	return self->order;
}
void wrap_lm_ngram_FixedWidthParameters_probing_multiplier_set(lm::ngram::FixedWidthParameters* self, float val) {
	self->probing_multiplier = val;
}
float wrap_lm_ngram_FixedWidthParameters_probing_multiplier_get(lm::ngram::FixedWidthParameters* self) {
	return self->probing_multiplier;
}
void wrap_lm_ngram_FixedWidthParameters_model_type_set(lm::ngram::FixedWidthParameters* self, lm::ngram::ModelType val) {
	self->model_type = val;
}
lm::ngram::ModelType wrap_lm_ngram_FixedWidthParameters_model_type_get(lm::ngram::FixedWidthParameters* self) {
	return self->model_type;
}
void wrap_lm_ngram_FixedWidthParameters_has_vocabulary_set(lm::ngram::FixedWidthParameters* self, bool val) {
	self->has_vocabulary = val;
}
bool wrap_lm_ngram_FixedWidthParameters_has_vocabulary_get(lm::ngram::FixedWidthParameters* self) {
	return self->has_vocabulary;
}
void wrap_lm_ngram_FixedWidthParameters_search_version_set(lm::ngram::FixedWidthParameters* self, unsigned int val) {
	self->search_version = val;
}
unsigned int wrap_lm_ngram_FixedWidthParameters_search_version_get(lm::ngram::FixedWidthParameters* self) {
	return self->search_version;
}

void register_lm_ngram_FixedWidthParameters(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::FixedWidthParameters > rb_cFixedWidthParameters =  Rice::define_class_under< lm::ngram::FixedWidthParameters >(rb_mKenlm_Ngram, "FixedWidthParameters");
	rb_cFixedWidthParameters.define_constructor(Rice::Constructor< lm::ngram::FixedWidthParameters >());
	rb_cFixedWidthParameters.define_method("order=", &wrap_lm_ngram_FixedWidthParameters_order_set);
	rb_cFixedWidthParameters.define_method("order", &wrap_lm_ngram_FixedWidthParameters_order_get);
	rb_cFixedWidthParameters.define_method("probing_multiplier=", &wrap_lm_ngram_FixedWidthParameters_probing_multiplier_set);
	rb_cFixedWidthParameters.define_method("probing_multiplier", &wrap_lm_ngram_FixedWidthParameters_probing_multiplier_get);
	rb_cFixedWidthParameters.define_method("model_type=", &wrap_lm_ngram_FixedWidthParameters_model_type_set);
	rb_cFixedWidthParameters.define_method("model_type", &wrap_lm_ngram_FixedWidthParameters_model_type_get);
	rb_cFixedWidthParameters.define_method("has_vocabulary=", &wrap_lm_ngram_FixedWidthParameters_has_vocabulary_set);
	rb_cFixedWidthParameters.define_method("has_vocabulary", &wrap_lm_ngram_FixedWidthParameters_has_vocabulary_get);
	rb_cFixedWidthParameters.define_method("search_version=", &wrap_lm_ngram_FixedWidthParameters_search_version_set);
	rb_cFixedWidthParameters.define_method("search_version", &wrap_lm_ngram_FixedWidthParameters_search_version_get);
}
