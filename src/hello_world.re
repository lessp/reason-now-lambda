let () =
  Now.io_lambda((reqd, _ctx) => {
    let response =
      Now.(
        Response.create(
          ~headers=Headers.of_list([("content-type", "text/html")]),
          `OK,
        )
      );

    Lwt.return(
      Now.Reqd.respond_with_string(reqd, response, "<h1>Hello World</h1>"),
    );
  });
