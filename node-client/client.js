const path = require("path");
const PROTO_PATH = path.join(__dirname, "/../protos/Auth.proto");

const grpc = require("grpc");
const protoLoader = require("@grpc/proto-loader");
var packageDefinition = protoLoader.loadSync(PROTO_PATH, {
  keepCase: true,
  longs: String,
  enums: String,
  defaults: true,
  oneofs: true,
});

var auth_proto = grpc.loadPackageDefinition(packageDefinition).google.protobuf;
//console.log(auth_proto);

function main() {
  const client = new auth_proto.Authentication(
    "localhost:50051",
    grpc.credentials.createInsecure()
  );

  //console.log(client.Login);
  client.Login({ user: "admin", password: "q1w2e3r4@" }, (err, response) => {
    console.log("Login:", response.ok);
  });
}

main();
