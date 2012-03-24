require 'rbplusplus'
require 'fileutils'
include RbPlusPlus

KENLM_DIR = File.expand_path(File.dirname(__FILE__))

Extension.new "kenlm" do |e|
  e.working_dir = File.join(KENLM_DIR, "generated")
  e.sources [ "lm/model.hh" ],
    :include_paths => KENLM_DIR,
    :include_source_dir => File.join(KENLM_DIR, "lm"),
    :include_source_dir => File.join(KENLM_DIR, "util")

  e.module "Kenlm" do |m|
    node = m.namespace "lm"

    m.module "Ngram" do |ngram|
      node = ngram.namespace "ngram"
      
#      node.classes("TrieModel").use_constructor(
#	node.classes("TrieModel").constructors.find(:arguments => [nil])
#      )
      #node.classes("TrieModel").methods("Score").find(:arguments => [nil, nil, nil])[0].ignore
    end
  end
end
