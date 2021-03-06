#ifdef HAVE_CONFIG_H
#include <../../config.h>
#endif
/*
 * Copyright (c) 1991 Stanford University
 * Copyright (c) 1991 Silicon Graphics, Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and 
 * its documentation for any purpose is hereby granted without fee, provided
 * that (i) the above copyright notices and this permission notice appear in
 * all copies of the software and related documentation, and (ii) the names of
 * Stanford and Silicon Graphics may not be used in any advertising or
 * publicity relating to the software without the specific, prior written
 * permission of Stanford and Silicon Graphics.
 * 
 * THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY 
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.  
 *
 * IN NO EVENT SHALL STANFORD OR SILICON GRAPHICS BE LIABLE FOR
 * ANY SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND,
 * OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
 * WHETHER OR NOT ADVISED OF THE POSSIBILITY OF DAMAGE, AND ON ANY THEORY OF 
 * LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE 
 * OF THIS SOFTWARE.
 */

/*
 * MFDialogKit -- object for creating common Motif-ish dialog boxes
 */

#include <IV-look/fchooser.h>
#include <IV-look/field.h>
#include <IV-look/mf_dialogs.h>
#include <OS/string.h>

class MFDialogKitImpl {
private:
    friend class MFDialogKit;
};

MFDialogKit::MFDialogKit() { }
MFDialogKit::~MFDialogKit() { }

FieldEditor* MFDialogKit::make_field_editor(
    const String& sample, WidgetKit* k, Style* s, FieldEditorAction* a
) const {
    return new FieldEditor(sample, k, s, a);
}

FileChooser* MFDialogKit::make_file_chooser(
    const String& dir, WidgetKit* k, Style* s, FileChooserAction* a
) const {
    return new FileChooser(dir, k, s, a);
}
