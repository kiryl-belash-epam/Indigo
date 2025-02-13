﻿#ifndef __monomer_commons__
#define __monomer_commons__

#include <string>
#include <unordered_set>

#include "molecule/monomers_lib.h"
#include "molecule/parse_utils.h"

namespace indigo
{
    const int kStdMonomerDef = 3;

    // amino acids
    const auto kMonomerClassAA = "AA";
    const auto kMonomerClassdAA = "dAA";
    const auto kMonomerClassMODAA = "MODAA";
    const auto kMonomerClassMODDAA = "MODdAA";
    const auto kMonomerClassXLINKAA = "XLINKAA";
    const auto kMonomerClassXLINKDAA = "XLINKdAA";
    const auto kMonomerClassAminoAcid = "AminoAcid";
    const auto kMonomerClassDAminoAcid = "D-AminoAcid";
    const auto kMonomerClassPEPTIDE = "PEPTIDE";

    // nucleic classes
    const auto kMonomerClassDNA = "DNA";
    const auto kMonomerClassRNA = "RNA";
    const auto kMonomerClassMODDNA = "MODDNA";
    const auto kMonomerClassMODRNA = "MODRNA";
    const auto kMonomerClassXLINKDNA = "XLINKDNA";
    const auto kMonomerClassXLINKRNA = "XLINKRNA";

    const auto kMonomerClassCHEM = "CHEM";
    const auto kMonomerClassSUGAR = "SUGAR";
    const auto kMonomerClassBASE = "BASE";
    const auto kMonomerClassPHOSPHATE = "PHOSPHATE";

    const auto kMonomerClassMOD = "MOD";
    const auto kMonomerClassXLINK = "XLINK";

    const auto kPrefix_d("d");
    const auto kPrefix_r("r");

    bool isNucleicClass(const std::string& monomer_class);

    bool isNucleotideClass(const std::string& monomer_class);

    bool isAminoAcidClass(const std::string& monomer_class);

    bool isRNAClass(const std::string& monomer_class);

    bool isDNAClass(const std::string& monomer_class);

    std::string classToPrefix(const std::string& monomer_class);

    std::string monomerNameByAlias(const std::string& monomer_class, const std::string& alias);

    bool isBasicAminoAcid(const std::string& monomer_class, const std::string& alias);

    std::string monomerAliasByName(const std::string& monomer_class, const std::string& name);

    std::string normalizeMonomerName(const std::string& monomer_class, const std::string& name);

    std::string normalizeMonomerAlias(const std::string& monomer_class, const std::string& alias);

    bool isAttachmentPointsInOrder(int order, const std::string& label);
    int getAttachmentOrder(const std::string& label);
    std::string getAttachmentLabel(int order);

    const auto kLeftAttachmentPoint = "Al";
    const auto kRightAttachmentPoint = "Br";
    const auto kBranchAttachmentPoint = "Cx";
    const int kLeftAttachmentPointIdx = 0;
    const int kRightAttachmentPointIdx = 1;
    const int kBranchAttachmentPointIdx = 2;

    struct MonomerAttachmentPoint
    {
        int attachment_atom;
        int leaving_group;
        std::string id;
    };
}
#endif