/* A program that links Block, Curry, Caml_option, and Caml_builtin_exceptions,
   as typical BuckleScript programs are likely to be using these anyway. */

let f = (g, x) =>
  raise(Invalid_argument(
    g(
      Some(Belt.Array.map(x, ignore)),
      Belt.Result.Ok(Belt.List.fromArray(x)))));
