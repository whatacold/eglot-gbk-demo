This demo intends to illustrate a problem for non UTF-8 character encoding project,
with eglot and ccls/cquery/clangd as LSP client and server, respectively.

For example, eglot will complain something like below in `*Message*` with clangd 6:

```
[jsonrpc] (warning) Invalid JSON: (?\C-@) {"id":8,"jsonrpc":"2.0","result":{"isIncomplete":false,"items":[{"detail":"void","documentation":"Say hello to someone \317 ...
```
