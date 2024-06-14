package tree_sitter_DIMACS_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-DIMACS"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_DIMACS.Language())
	if language == nil {
		t.Errorf("Error loading Dimacs grammar")
	}
}
